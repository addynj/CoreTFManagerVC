//
//  CoreTFManagerVC.h
//  CoreTFManagerVC
//
//  Created by 沐汐 on 15-3-5.
//  Copyright (c) 2015年 沐汐. All rights reserved.
//
//  键盘管理者
//  生命周期模仿百度地图，这样做很有好处。
//


#import <UIKit/UIKit.h>
#import "TFModel.h"

@interface CoreTFManagerVC : UIViewController


/**
 *  安装
 *
 *  @param vc         需要安装的控制器
 *  @param scrollView textField所在的scrollView
 *  @param tfModels   textField包装模型数组
 */
+(void)installManagerForVC:(UIViewController *)vc scrollView:(UIScrollView *)scrollView tfModels:(NSArray *(^)())tfModels;


/**
 *  卸载
 */
+(void)uninstallManagerForVC:(UIViewController *)vc;




@end
