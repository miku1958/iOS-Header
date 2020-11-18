//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIKBRTFingerInfo : NSObject <NSCopying>
{
    BOOL _unknownSeen;
    double _radius;
    double _lastSeenTimestamp;
    unsigned long long _identity;
    struct CGPoint _location;
}

@property (readonly, nonatomic) double feedbackAlpha;
@property (nonatomic) unsigned long long identity; // @synthesize identity=_identity;
@property (nonatomic) double lastSeenTimestamp; // @synthesize lastSeenTimestamp=_lastSeenTimestamp;
@property (nonatomic) struct CGPoint location; // @synthesize location=_location;
@property (nonatomic) double radius; // @synthesize radius=_radius;
@property (nonatomic) BOOL unknownSeen; // @synthesize unknownSeen=_unknownSeen;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end

