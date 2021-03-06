//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/TSWPShapeInfo.h>

#import <TSText/TSDComment-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor;

@interface TSWPFloatingCommentInfo : TSWPShapeInfo <TSDComment>
{
    TSDCommentStorage *_commentStorage;
}

@property (readonly, nonatomic) int annotationDisplayStringType;
@property (readonly, nonatomic) int annotationType;
@property (readonly, nonatomic) NSString *annotationUUID;
@property (strong, nonatomic) TSKAnnotationAuthor *author;
@property (readonly, nonatomic) double commentScalingMultiplier;
@property (strong, nonatomic) TSDCommentStorage *commentStorage;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isHighlight;
@property (copy, nonatomic) TSDCommentStorage *storage;
@property (readonly) Class superclass;

+ (id)bezierPathForExportCommentOutline;
+ (id)commentInfoWithContext:(id)arg1 size:(struct CGSize)arg2 storage:(id)arg3;
+ (struct CGSize)commentInitialSizeWithContext:(id)arg1;
+ (id)commentParagraphStyleForStylesheet:(id)arg1;
+ (id)commentParagraphStyleForStylesheet:(id)arg1 scalingMultiplier:(double)arg2;
+ (id)commentParagraphStyleIdentifierForFontSize:(unsigned long long)arg1;
+ (id)commentStyleIdentifier;
+ (void)createCommentInfoStyleInStylesheetIfNeeded:(id)arg1;
+ (id)p_commentInfoWithContext:(id)arg1 geometry:(id)arg2 storage:(id)arg3;
+ (id)p_commentParagraphStyleForStylesheet:(id)arg1 fontSize:(unsigned long long)arg2;
+ (id)p_defaultCommentInfoStyleInStylesheet:(id)arg1;
+ (id)p_defaultFill;
+ (id)p_defaultPadding;
+ (id)p_defaultShadow;
+ (id)p_defaultStroke;
+ (void)upgradeCommentInfoStorage:(id)arg1;
+ (void)upgradeCommentInfoStyle:(id)arg1;
+ (void)upgradeCommentParagraphStylesForStylesheet:(id)arg1 withCommentScale:(double)arg2;
- (void).cxx_destruct;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (void)commentWillBeAddedToDocumentRoot;
- (id)copyWithContext:(id)arg1;
- (id)creationDateString;
- (Class)editorClass;
- (unsigned int)elementKind;
- (void)enumerateAllAnnotationsInModelWithHitBlock:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 commentStorage:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5 commentStorage:(id)arg6;
- (BOOL)isAllowedInGroups;
- (BOOL)isFloatingComment;
- (BOOL)isInDocument;
- (BOOL)isLockable;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct CommentInfoArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)pathSourceForExportCommentOutline;
- (Class)repClass;
- (void)saveToArchive:(struct CommentInfoArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (BOOL)supportsAttachedComments;
- (BOOL)supportsHyperlinks;
- (double)transformGeometryRatioForTransform:(struct CGAffineTransform)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;

@end

