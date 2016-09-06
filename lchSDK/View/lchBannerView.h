//
//  lchBannerView.h
//
//  Created by lch on 6/12/16.
//  Copyright © 2016 lch. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef void (^scrollViewSelectBlock)(NSString *,NSString*);

@interface lchBannerView : UIView
/** 图片路径数组 **/
@property (nonatomic,strong) NSArray *oldData;
@property (strong, nonatomic) NSArray *pics;
@property (nonatomic,strong) NSArray *titleA;
@property (nonatomic,strong) NSArray *urlA;

/** pageControl 颜色 **/
@property (strong, nonatomic) UIColor *pageColor;
@property (strong, nonatomic) UIColor *pageSelColor;
@property (nonatomic, copy) scrollViewSelectBlock imgViewSelectBlock; // 图片点击事件
- (void)returnIndex:(scrollViewSelectBlock)block; //代码块回调

/** 赋值以后，调用此方法刷新视图 **/
- (void) reloadView;

@end
