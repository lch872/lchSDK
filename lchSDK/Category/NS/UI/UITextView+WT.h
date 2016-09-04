//
//  UITextView+WT.h
//  lchSDK
//
//  Created by lch on 16/1/12.
//  Copyright © 2015年 lch. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (WT)
- (void)insertAttributedText:(NSAttributedString *)text;
- (void)insertAttributedText:(NSAttributedString *)text settingBlock:(void (^)(NSMutableAttributedString *attributedText))settingBlock;
@end
