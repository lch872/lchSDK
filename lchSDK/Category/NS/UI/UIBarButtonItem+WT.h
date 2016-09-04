//
//  UIBarButtonItem+WT.h
//  lchSDK
//
//  Created by lch on 16/1/12.
//  Copyright © 2015年 lch. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (WT)
+ (UIBarButtonItem *)itemWithTarget:(id)target action:(SEL)action image:(NSString *)image highImage:(NSString *)highImage;
@end
