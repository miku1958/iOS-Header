//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/NSSecureCoding-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MRPlaybackQueue : NSObject <NSSecureCoding>
{
    NSArray *_contentItems;
    CDStruct_627e0f85 _range;
}

@property (readonly, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
@property (readonly, nonatomic) CDStruct_627e0f85 range; // @synthesize range=_range;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentItems:(id)arg1 range:(CDStruct_627e0f85)arg2;

@end
