//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, WBSOpenSearchDescription, WBSOpenSearchURLTemplate;
@protocol WBSQuickWebsiteSearchProviderDelegate;

@interface WBSQuickWebsiteSearchProvider : NSObject
{
    id<WBSQuickWebsiteSearchProviderDelegate> _delegate;
    NSString *_displayName;
    NSString *_hostname;
    NSString *_sourcePageURLString;
    NSDate *_dateAdded;
    WBSOpenSearchURLTemplate *_searchURLTemplateFromForm;
    NSString *_openSearchDescriptionURLString;
    NSDate *_dateOfLastSearch;
}

@property (readonly, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property (copy, nonatomic) NSDate *dateOfLastSearch; // @synthesize dateOfLastSearch=_dateOfLastSearch;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) WBSOpenSearchDescription *openSearchDescription;
@property (copy, nonatomic) NSString *openSearchDescriptionURLString; // @synthesize openSearchDescriptionURLString=_openSearchDescriptionURLString;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplate;
@property (strong, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplateFromForm; // @synthesize searchURLTemplateFromForm=_searchURLTemplateFromForm;
@property (readonly, nonatomic) NSString *sourcePageURLString; // @synthesize sourcePageURLString=_sourcePageURLString;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInJSON;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 delegate:(id)arg2;
- (id)initWithSourcePageURLString:(id)arg1 openSearchDescriptionURLString:(id)arg2 delegate:(id)arg3;
- (id)initWithSourcePageURLString:(id)arg1 searchURLTemplateFromForm:(id)arg2 delegate:(id)arg3;

@end

