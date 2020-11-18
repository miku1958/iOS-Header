//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ROCKFFICIFObject;

__attribute__((visibility("hidden")))
@interface ROCKFFIClosureObject : NSObject
{
    ROCKFFICIFObject *_cifObject;
    CDUnknownFunctionPointerType _functionPointer;
    CDStruct_94ba51a7 *_closure;
}

@property (strong, nonatomic) ROCKFFICIFObject *cifObject; // @synthesize cifObject=_cifObject;
@property (nonatomic) CDStruct_94ba51a7 *closure; // @synthesize closure=_closure;
@property (nonatomic) CDUnknownFunctionPointerType functionPointer; // @synthesize functionPointer=_functionPointer;

+ (id)closureObjectWithCIFObject:(id)arg1 functionPointer:(CDUnknownFunctionPointerType)arg2 userData:(void *)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCIFObject:(id)arg1 functionPointer:(CDUnknownFunctionPointerType)arg2 userData:(void *)arg3;

@end

