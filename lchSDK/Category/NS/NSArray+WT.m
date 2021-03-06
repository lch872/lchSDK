//
//  NSArray+WT.m
//  lchSDK
//
//  Created by lch on 16/1/12.
//  Copyright © 2015年 lch. All rights reserved.
//

#import "NSArray+WT.h"
@implementation NSArray (WT)

- (id)objectAtIndexCheck:(NSUInteger)index {
    if (index < self.count) {
        return self[index];
    } else {
        //数组越界了就返回nil
        return nil;
    }
}
/**
 *  [self isKindOfClass:[NSArray class]]
 */
- (BOOL)isAClass {
    return [self isKindOfClass:[NSArray class]];
}

/**
 *  数组 转为 JsonStr
 */
- (NSString *)jsonStr {
    return [[NSString alloc] initWithData:[NSJSONSerialization dataWithJSONObject:self options:0 error:NULL] encoding:NSUTF8StringEncoding];
}
/**
 *  合并成用，逗号隔开的字符创
 */
- (NSString *)combinStr {
    return [self componentsJoinedByString:@","];
}

/**
 *  请接收返回的数组 按 字段 给数组排序
 */
- (NSArray *)sortbyKey:(NSString *)key asc:(BOOL)ascend {
    return [self sortedArrayUsingDescriptors:[NSArray arrayWithObject:[NSSortDescriptor sortDescriptorWithKey:key ascending:ascend]]];
}

#pragma mark 数组比较
- (BOOL)compareIgnoreObjectOrderWithArray:(NSArray *)array {
    NSSet *set1 = [NSSet setWithArray:self];
    NSSet *set2 = [NSSet setWithArray:array];
    return [set1 isEqualToSet:set2];
}

/**
 *  数组计算交集
 */
- (NSArray *)arrayForIntersectionWithOtherArray:(NSArray *)otherArray {
    NSMutableArray *intersectionArray = [NSMutableArray array];
    if (self.count == 0) return nil;
    if (otherArray == nil) return nil;
    //遍历
    for (id obj in self) {
        if (![otherArray containsObject:obj]) continue;
        //添加
        [intersectionArray addObject:obj];
    }

    return intersectionArray;
}

/**
 *  数据计算差集
 */
- (NSArray *)arrayForMinusWithOtherArray:(NSArray *)otherArray {
    if (self == nil) return nil;
    if (otherArray == nil) return self;
    NSMutableArray *minusArray = [NSMutableArray arrayWithArray:self];
    //遍历
    for (id obj in otherArray) {
        if (![self containsObject:obj]) continue;
        //添加
        [minusArray removeObject:obj];
    }
    return minusArray;
}

@end

