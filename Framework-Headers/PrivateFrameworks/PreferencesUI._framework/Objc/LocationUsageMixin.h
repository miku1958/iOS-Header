//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PSTableCell, UIImageView, UILabel;

@interface LocationUsageMixin : NSObject
{
    PSTableCell *_cell;
    int _usage;
    UIImageView *_usageIndicator;
    UILabel *_authLevelLabel;
    double horizontalOffset;
    unsigned long long _authLevel;
}

@property (nonatomic) unsigned long long authLevel; // @synthesize authLevel=_authLevel;
@property (nonatomic) double horizontalOffset; // @synthesize horizontalOffset;
@property (nonatomic) int usage; // @synthesize usage=_usage;

- (void).cxx_destruct;
- (id)_authLevelForMask:(unsigned long long)arg1;
- (struct CGSize)_authLevelLabelSize:(unsigned long long)arg1;
- (id)iconNameForUsage:(int)arg1;
- (id)initWithTableCell:(id)arg1;
- (void)layoutUsageIndicator;
- (struct CGSize)usageIndicatorSize;

@end
