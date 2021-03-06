//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSNumber, NSString, UIImage, WBSParsecAuxiliaryInfo, WBSParsecImageRepresentation;
@protocol WBSParsecSearchSession;

@protocol WBSParsecSearchGenericResult

@property (readonly, nonatomic) WBSParsecAuxiliaryInfo *auxiliaryInfo;
@property (readonly, copy, nonatomic) NSArray *descriptionRichTexts;
@property (readonly, copy, nonatomic) NSString *footnote;
@property (readonly, copy, nonatomic) NSString *secondaryTitle;
@property (readonly, nonatomic) WBSParsecImageRepresentation *secondaryTitleGlyph;
@property (readonly, nonatomic) WBSParsecImageRepresentation *thumbnail;
@property (readonly, nonatomic) NSNumber *titleMaximumLines;

- (UIImage *)thumbnailWithSession:(id<WBSParsecSearchSession>)arg1;
@end

