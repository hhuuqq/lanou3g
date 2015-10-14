//
//  MusicPlayerView.h
//  Music
//
//  Created by hhuuqq on 15/10/5.
//  Copyright (c) 2015年 lanou3g. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MusicPlayerView : UIView

@property (nonatomic,strong) UIScrollView *mainScrollView;
@property(nonatomic,strong)UIScrollView  * mainScorllView;
@property(nonatomic,strong)UIImageView * headImageView;
@property(nonatomic,strong)UITableView * lyricTableView;
@property(nonatomic,strong)UILabel * currentTimeLabel;
@property(nonatomic,strong)UISlider * progressSilder;
@property(nonatomic,strong)UILabel * totleTiemLabel;

@property(nonatomic,strong)UIButton * lastSongButton;
@property(nonatomic,strong)UIButton * playPauseButton;
@property(nonatomic,strong)UIButton * nextSongButton;
@end
