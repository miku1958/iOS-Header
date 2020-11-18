//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/TMLBlockJSExports-Protocol.h>

@interface TMLBlock : NSObject <TMLBlockJSExports>
{
    id _block;
}

@property (readonly, nonatomic) id blockValue;

+ (id)blockWithFunction:(id)arg1;
+ (id)blockWithFunction:(id)arg1 argumentsEncoding:(id)arg2;
+ (void)callBlock:(id)arg1 arguments:(id)arg2;
+ (id)createBlockForJSFunction:(id)arg1 argumentsEncoding:(id)arg2;
+ (void)initializeJSContext:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFunction:(id)arg1 argumentsEncoding:(id)arg2;

@end

