//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelKind.h>

@class NSDictionary;

@interface MPModelGenericObjectKind : MPModelKind
{
    NSDictionary *_relationshipKinds;
}

@property (readonly, nonatomic) NSDictionary *relationshipKinds; // @synthesize relationshipKinds=_relationshipKinds;

+ (id)kindWithRelationshipKinds:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

