//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlayUI/CPUIImageRowCellConfigurationProtocol-Protocol.h>

@class NSArray, NSString;

@interface CPUIImageRowCellConfiguration : NSObject <CPUIImageRowCellConfigurationProtocol>
{
    BOOL _showActivityIndicator;
    NSString *_title;
    CDUnknownBlockType _selectGridItemBlock;
    CDUnknownBlockType _selectTitleBlock;
    NSArray *_images;
    NSArray *_artworkCatalogs;
}

@property (strong, nonatomic) NSArray *artworkCatalogs; // @synthesize artworkCatalogs=_artworkCatalogs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *images; // @synthesize images=_images;
@property (copy, nonatomic) CDUnknownBlockType selectGridItemBlock; // @synthesize selectGridItemBlock=_selectGridItemBlock;
@property (copy, nonatomic) CDUnknownBlockType selectTitleBlock; // @synthesize selectTitleBlock=_selectTitleBlock;
@property (nonatomic) BOOL showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)configurationWithText:(id)arg1 artworkCatalogs:(id)arg2 selectGridItemBlock:(CDUnknownBlockType)arg3 selectTitleBlock:(CDUnknownBlockType)arg4;
+ (id)configurationWithText:(id)arg1 artworkCatalogs:(id)arg2 selectGridItemBlock:(CDUnknownBlockType)arg3 selectTitleBlock:(CDUnknownBlockType)arg4 showActivityIndicator:(BOOL)arg5;
+ (id)configurationWithText:(id)arg1 images:(id)arg2 selectGridItemBlock:(CDUnknownBlockType)arg3 selectTitleBlock:(CDUnknownBlockType)arg4 showActivityIndicator:(BOOL)arg5;
- (void).cxx_destruct;

@end

