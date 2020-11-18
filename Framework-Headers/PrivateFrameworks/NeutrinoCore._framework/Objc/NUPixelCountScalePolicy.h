//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUScalePolicy-Protocol.h>

@class NSString;

@interface NUPixelCountScalePolicy : NSObject <NUScalePolicy>
{
    long long _totalPixelCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (id)initWithTargetPixelCount:(long long)arg1;
- (CDStruct_912cb5d2)scaleForImageSize:(CDStruct_912cb5d2)arg1;

@end

