//
//  RefreshHeaderView.h
//  刷新控件
//
//  Created by 陈林 on 16/4/1.
//  Copyright © 2016年 陈林. All rights reserved.
//

#import "RefreshBaseView.h"
#import "CircleView.h"
 
@interface RefreshHeaderView : RefreshBaseView <CircleViewDelegate>
+ (instancetype)headerWithRefreshHandler:(RefreshedHandler )refreshHandler;

@end
