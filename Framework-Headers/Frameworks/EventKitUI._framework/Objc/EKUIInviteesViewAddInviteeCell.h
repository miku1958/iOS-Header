//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSString, UILabel;

@interface EKUIInviteesViewAddInviteeCell : UITableViewCell
{
    UILabel *_simpleTextLabel;
    NSArray *_persistentConstraints;
    NSString *_simpleText;
}

@property (strong, nonatomic) NSArray *persistentConstraints; // @synthesize persistentConstraints=_persistentConstraints;
@property (strong, nonatomic) NSString *simpleText; // @synthesize simpleText=_simpleText;
@property (strong, nonatomic) UILabel *simpleTextLabel; // @synthesize simpleTextLabel=_simpleTextLabel;

+ (id)_simpleTextLabelFont;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateConstraints;

@end
