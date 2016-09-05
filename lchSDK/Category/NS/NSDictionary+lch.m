//
//  NSDictionary+lch.m
//  mySDK
//
//  Created by lch on 16/9/5.
//  Copyright © 2016年 lch. All rights reserved.
//

#import "NSDictionary+lch.h"

@implementation NSDictionary (lch)
//字典 转为 JsonStr
- (NSString *)jsonStr {
    return [[NSString alloc] initWithData:[NSJSONSerialization dataWithJSONObject:self options:0 error:NULL] encoding:NSUTF8StringEncoding];
}
@end
