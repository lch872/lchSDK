//
//  UILabel+WT.h
//  lchSDK
//
//  Created by lch on 16/1/12.
//  Copyright © 2015年 lch. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (WT)

/** 创建一个 */
+ (UILabel *)newSingleFrame:(CGRect)frame title:(NSString *)title fontS:(CGFloat)fonts color:(UIColor *)color;

/** 有删除线的 */
- (void)delLineStr:(NSString *)string;
/** 有下划线的 */
- (void)underlineStr:(NSString *)string;
@end
