//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFSearchViewAppearFeedback : SFFeedback
{
    BOOL _isOnLockScreen;
    BOOL _isOverApp;
    BOOL _readerTextAvailable;
    unsigned long long _viewAppearEvent;
    NSString *_preexistingInput;
}

@property (nonatomic) BOOL isOnLockScreen; // @synthesize isOnLockScreen=_isOnLockScreen;
@property (nonatomic) BOOL isOverApp; // @synthesize isOverApp=_isOverApp;
@property (copy, nonatomic) NSString *preexistingInput; // @synthesize preexistingInput=_preexistingInput;
@property (nonatomic) BOOL readerTextAvailable; // @synthesize readerTextAvailable=_readerTextAvailable;
@property (nonatomic) unsigned long long viewAppearEvent; // @synthesize viewAppearEvent=_viewAppearEvent;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(unsigned long long)arg1;

@end

