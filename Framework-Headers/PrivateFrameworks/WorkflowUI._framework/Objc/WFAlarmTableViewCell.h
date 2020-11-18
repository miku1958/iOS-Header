//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MTUIAlarmView;

@interface WFAlarmTableViewCell : UITableViewCell
{
    BOOL _enabled;
    MTUIAlarmView *_alarmView;
}

@property (readonly, nonatomic) MTUIAlarmView *alarmView; // @synthesize alarmView=_alarmView;
@property (nonatomic) BOOL enabled; // @synthesize enabled=_enabled;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)refreshUI:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
