//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreInterest/IFVectorOperationScalar-Protocol.h>

@class NSString;

@interface IFVectorOperationScalar : NSObject <IFVectorOperationScalar>
{
    CDUnknownBlockType _b;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)operationWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (double)operate:(id)arg1 v2:(id)arg2;

@end
