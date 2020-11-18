//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFilterNewFlowVerdict.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEFilterControlVerdict : NEFilterNewFlowVerdict <NSSecureCoding, NSCopying>
{
    BOOL _updateRules;
    BOOL _handledByDataProvider;
}

@property BOOL handledByDataProvider; // @synthesize handledByDataProvider=_handledByDataProvider;
@property BOOL updateRules; // @synthesize updateRules=_updateRules;

+ (id)allowVerdictWithUpdateRules:(BOOL)arg1;
+ (id)dropVerdictWithUpdateRules:(BOOL)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)updateRules;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
