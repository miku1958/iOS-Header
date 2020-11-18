//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>
#import <iTunesStoreUI/NSSecureCoding-Protocol.h>

@class SUDOMElement;

@interface SUOverlayTransition : NSObject <NSSecureCoding, NSCopying>
{
    double _duration;
    SUDOMElement *_sourceElement;
    long long _type;
}

@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (strong, nonatomic) SUDOMElement *sourceElement; // @synthesize sourceElement=_sourceElement;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
+ (long long)transitionTypeFromString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

