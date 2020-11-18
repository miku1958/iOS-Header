//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUILabel.h>

@class NSDate, NSString, NSTimer;
@protocol VUIRentalExpirationLabelDelegate;

__attribute__((visibility("hidden")))
@interface VUIRentalExpirationLabel : VUILabel
{
    NSDate *_expirationDate;
    id<VUIRentalExpirationLabelDelegate> _delegate;
    NSString *_formatString;
    NSTimer *_expiryUpdateTimer;
}

@property (weak, nonatomic) id<VUIRentalExpirationLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (strong, nonatomic) NSTimer *expiryUpdateTimer; // @synthesize expiryUpdateTimer=_expiryUpdateTimer;
@property (copy, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;

+ (id)_calculateExpirationStringForDate:(id)arg1 displayWarningColor:(BOOL *)arg2 updateInterval:(long long *)arg3 formatString:(id)arg4;
+ (id)calculateExpirationStringForDate:(id)arg1 updateInterval:(long long *)arg2 formatString:(id)arg3;
+ (id)labelWithExpirationDate:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3 formatString:(id)arg4;
- (void).cxx_destruct;
- (void)_computeExpirationLabel:(id)arg1;
- (void)dealloc;
- (void)invalidateTimer;
- (void)willMoveToWindow:(id)arg1;

@end

