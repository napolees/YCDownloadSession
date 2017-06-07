//
//  VideoCacheListCell.h
//  YCDownloadSession
//
//  Created by wangzhen on 17/3/23.
//  Copyright © 2017年 onezen.cc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YCDownloadItem.h"

@interface VideoCacheListCell : UITableViewCell

@property (nonatomic, strong) YCDownloadItem *item;

+(instancetype)videoCacheListCellWithTableView:(UITableView *)tableView;

+ (CGFloat)rowHeight;

@end
