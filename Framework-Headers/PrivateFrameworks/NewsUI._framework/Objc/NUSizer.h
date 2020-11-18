//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUSizer-Protocol.h>

@class NSString;

@interface NUSizer : NSObject <NUSizer>
{
    BOOL _flexible;
    BOOL _alwaysIntegral;
    NSString *_desc;
    CDUnknownBlockType _sizerBlock;
}

@property (readonly, nonatomic) BOOL alwaysIntegral; // @synthesize alwaysIntegral=_alwaysIntegral;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL flexible; // @synthesize flexible=_flexible;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) CDUnknownBlockType sizerBlock; // @synthesize sizerBlock=_sizerBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect)frameInBounds:(struct CGRect)arg1 cursor:(double)arg2 options:(struct NULayoutOptions)arg3 layoutContext:(id)arg4;
- (id)initWithDescription:(id)arg1 flexible:(BOOL)arg2 sizerBlock:(CDUnknownBlockType)arg3;
- (id)initWithDescription:(id)arg1 sizerBlock:(CDUnknownBlockType)arg2;

@end
