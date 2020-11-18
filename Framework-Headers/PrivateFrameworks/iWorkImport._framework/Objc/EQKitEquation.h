//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EQKitEnvironment, NSData;
@protocol EQKitExpression;

__attribute__((visibility("hidden")))
@interface EQKitEquation : NSObject
{
    id<EQKitExpression> mRoot;
    NSData *mSource;
    EQKitEnvironment *mEnvironment;
}

@property (readonly, nonatomic) EQKitEnvironment *environment; // @synthesize environment=mEnvironment;
@property (readonly, nonatomic) id<EQKitExpression> root; // @synthesize root=mRoot;

+ (id)equationSourceFromDataProvider:(struct CGDataProvider *)arg1;
+ (id)equationSourceFromPDFData:(id)arg1;
+ (id)equationSourceFromXMLMetadata:(id)arg1;
+ (id)equationWithData:(id)arg1 format:(int)arg2 environment:(id)arg3 error:(id *)arg4;
+ (id)equationWithString:(id)arg1 format:(int)arg2 environment:(id)arg3 error:(id *)arg4;
+ (id)equationWithString:(id)arg1 format:(int)arg2 error:(id *)arg3;
+ (id)equationWithXMLDoc:(struct _xmlDoc *)arg1 node:(struct _xmlNode *)arg2 environment:(id)arg3 error:(id *)arg4;
+ (int)formatFromData:(id)arg1;
+ (int)formatFromString:(id)arg1;
+ (BOOL)isEquationInPDFData:(id)arg1;
+ (id)mathMLStringFromLaTeXString:(id)arg1 environment:(id)arg2 error:(id *)arg3;
+ (id)xmlMetadataFromEquationSource:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)exportToXMLWriter:(struct _xmlTextWriter *)arg1 ns:(const char *)arg2 prefix:(const char *)arg3 characterCount:(int *)arg4;
- (id)init;
- (id)initWithRoot:(id)arg1 source:(id)arg2;
- (BOOL)isBaseFontNameUsed;
- (id)newLayout;
- (id)pdfDataWithLayout:(id)arg1 layoutContext:(id)arg2 sourceString:(id)arg3 tightFit:(BOOL)arg4;
- (id)pdfDataWithLayoutContext:(id)arg1 baselineOffset:(double *)arg2 sourceString:(id)arg3;

@end
