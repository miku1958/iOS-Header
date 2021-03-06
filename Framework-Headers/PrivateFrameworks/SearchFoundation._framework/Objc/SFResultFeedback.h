//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

#import <SearchFoundation/NSCopying-Protocol.h>

@class SFSearchResult;

@interface SFResultFeedback : SFFeedback <NSCopying>
{
    SFSearchResult *_result;
}

@property (strong, nonatomic) SFSearchResult *result; // @synthesize result=_result;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1;

@end

