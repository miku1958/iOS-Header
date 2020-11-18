//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFEndSearchFeedback : SFFeedback
{
    BOOL _isCanceled;
    NSString *_uuid;
    unsigned long long _cancelSearchEvent;
}

@property (nonatomic) unsigned long long cancelSearchEvent; // @synthesize cancelSearchEvent=_cancelSearchEvent;
@property (nonatomic) BOOL isCanceled; // @synthesize isCanceled=_isCanceled;
@property (copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartSearch:(id)arg1;

@end
