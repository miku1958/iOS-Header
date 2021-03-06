//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/TSCH3DShaderStatement-Protocol.h>

@class NSString;

@interface TSCH3DShaderRawStatement : NSObject <TSCH3DShaderStatement>
{
    NSString *mString;
    struct TSCH3DShaderType mLinkageType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct TSCH3DShaderType linkageType; // @synthesize linkageType=mLinkageType;
@property (readonly, nonatomic) NSString *string; // @synthesize string=mString;
@property (readonly) Class superclass;

+ (id)statementWithString:(id)arg1 linkageType:(struct TSCH3DShaderType)arg2;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithString:(id)arg1 linkageType:(struct TSCH3DShaderType)arg2;
- (BOOL)isLinked;
- (id)resolve;
- (void)setGeneratedForType:(struct TSCH3DShaderType)arg1;

@end

