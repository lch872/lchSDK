//
//  ViewController.m
//  mySDK
//
//  Created by lch on 16/9/4.
//  Copyright © 2016年 lch. All rights reserved.
//

#import "ViewController.h"
#import "UILabel+lch.h"





@interface ViewController ()
@property (nonatomic,weak) UILabel *myview;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    UILabel *view = [[UILabel alloc] initWithFrame:CGRectMake(50,50, 100, 100)];
    view.backgroundColor = [UIColor greenColor];
    self.myview = view;
    [self.myview underlineStr:@"好吧吧试试时时"];
    [self.view addSubview:view];

    
}

- (void)lch{
    NSLog(@" %@ ",@"点击了");
}

-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    NSLog(@" %@\\得到f ",@"44");
}
@end
