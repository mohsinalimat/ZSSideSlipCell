//
//  FavoriteLinkCell.h
//  ZSSideSlipCell_Master
//
//  Created by safiri on 2019/4/29.
//  Copyright © 2019 safiri. All rights reserved.
//

#import "ZSSideSlipCell.h"

NS_ASSUME_NONNULL_BEGIN

@interface FavoriteLinkCell : ZSSideSlipCell

+ (instancetype)cellWithTableView:(UITableView *)tableView forIndexPath:(NSIndexPath *)indexPath;
+ (void)registerCellWithTableView:(UITableView *)tableView;


- (void)bindModel:(id)model;
@end

NS_ASSUME_NONNULL_END
