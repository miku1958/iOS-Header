//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TLKProminenceView : UIView
{
    unsigned long long _prominence;
}

@property (nonatomic) unsigned long long prominence; // @synthesize prominence=_prominence;

+ (id)viewWithProminence:(unsigned long long)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithProminence:(unsigned long long)arg1;
- (void)tlk_updateForAppearance:(id)arg1;

@end
