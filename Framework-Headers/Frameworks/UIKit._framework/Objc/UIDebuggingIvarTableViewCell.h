//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class UIDebuggingIvar, UILabel;

__attribute__((visibility("hidden")))
@interface UIDebuggingIvarTableViewCell : UITableViewCell
{
    UIDebuggingIvar *_ivar;
    UILabel *_nameLabel;
    UILabel *_typeLabel;
    UILabel *_valueLabel;
}

@property (strong, nonatomic) UIDebuggingIvar *ivar; // @synthesize ivar=_ivar;
@property (strong, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property (strong, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property (strong, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;

- (void).cxx_destruct;
- (void)_prepareConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

@end

