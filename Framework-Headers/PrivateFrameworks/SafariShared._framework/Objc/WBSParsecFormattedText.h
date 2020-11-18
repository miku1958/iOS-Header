//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSNumber, NSString, WBSParsecImageRepresentation;

@interface WBSParsecFormattedText : WBSParsecModel
{
    BOOL _emphasized;
    NSString *_text;
    WBSParsecImageRepresentation *_glyphRepresentation;
    NSNumber *_spaceBeforeInPoints;
    NSNumber *_spaceAfterInPoints;
}

@property (readonly, nonatomic, getter=isEmphasized) BOOL emphasized; // @synthesize emphasized=_emphasized;
@property (readonly, nonatomic) WBSParsecImageRepresentation *glyphRepresentation; // @synthesize glyphRepresentation=_glyphRepresentation;
@property (readonly, nonatomic) NSNumber *spaceAfterInPoints; // @synthesize spaceAfterInPoints=_spaceAfterInPoints;
@property (readonly, nonatomic) NSNumber *spaceBeforeInPoints; // @synthesize spaceBeforeInPoints=_spaceBeforeInPoints;
@property (readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;

+ (id)schema;
- (void).cxx_destruct;
- (id)glyphWithSession:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

