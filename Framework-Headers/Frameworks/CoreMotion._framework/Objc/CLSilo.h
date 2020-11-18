//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>

@class NSString;

@interface CLSilo : NSObject <NSCopying>
{
    NSString *_identifier;
}

@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

+ (id)main;
- (void).cxx_destruct;
- (void)afterInterval:(double)arg1 async:(CDUnknownBlockType)arg2;
- (void)assertInside;
- (void)assertOutside;
- (void)async:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)initWithIdentifier:(id)arg1;
- (id)newTimer;
- (void)sync:(CDUnknownBlockType)arg1;

@end

