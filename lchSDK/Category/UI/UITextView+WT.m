//
//  UITextView+WT.m
//  lchSDK
//
//  Created by lch on 16/1/12.
//  Copyright © 2015年 lch. All rights reserved.
//

#import "UITextView+WT.h"

@implementation UITextView (WT)

- (void)insertAttributedText:(NSAttributedString *)text {
    [self insertAttributedText:text settingBlock:nil];
}

- (void)insertAttributedText:(NSAttributedString *)text settingBlock:(void (^)(NSMutableAttributedString *))settingBlock {
    NSMutableAttributedString *attributedText = [[NSMutableAttributedString alloc] init];
    // 拼接之前的文字（图片和普通文字）
    [attributedText appendAttributedString:self.attributedText];

    // 拼接其他文字
    NSUInteger loc = self.selectedRange.location;
    //    [attributedText insertAttributedString:text atIndex:loc];
    [attributedText replaceCharactersInRange:self.selectedRange withAttributedString:text]; //选中的内容替换

    // 调用外面传进来的代码
    if (settingBlock) {
        settingBlock(attributedText);
    }

    self.attributedText = attributedText;

    // 移除光标到表情的后面
    self.selectedRange = NSMakeRange(loc + 1, 0);
}

@end
