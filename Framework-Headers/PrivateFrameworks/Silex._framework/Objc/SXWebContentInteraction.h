//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentInteraction-Protocol.h>

@class NSString;

@interface SXWebContentInteraction : NSObject <SXWebContentInteraction>
{
    unsigned long long _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

- (id)initWithType:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)perform;

@end

