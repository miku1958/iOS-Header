//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VUIAction, VUIDocumentDataSource;

__attribute__((visibility("hidden")))
@interface VUIEventDataSource : NSObject
{
    VUIDocumentDataSource *_preActionDocumentDataSource;
    VUIAction *_preAction;
    VUIDocumentDataSource *_documentDataSource;
    VUIAction *_action;
    VUIDocumentDataSource *_postActionDocumentDataSource;
    VUIAction *_postAction;
}

@property (strong, nonatomic) VUIAction *action; // @synthesize action=_action;
@property (strong, nonatomic) VUIDocumentDataSource *documentDataSource; // @synthesize documentDataSource=_documentDataSource;
@property (strong, nonatomic) VUIAction *postAction; // @synthesize postAction=_postAction;
@property (strong, nonatomic) VUIDocumentDataSource *postActionDocumentDataSource; // @synthesize postActionDocumentDataSource=_postActionDocumentDataSource;
@property (strong, nonatomic) VUIAction *preAction; // @synthesize preAction=_preAction;
@property (strong, nonatomic) VUIDocumentDataSource *preActionDocumentDataSource; // @synthesize preActionDocumentDataSource=_preActionDocumentDataSource;

+ (id)_actionForKey:(id)arg1 eventDict:(id)arg2 viewElement:(id)arg3;
+ (id)_documentDataSourceWithDict:(id)arg1 viewElement:(id)arg2;
+ (id)eventDataSourceWithEventDict:(id)arg1 viewElement:(id)arg2;
- (void).cxx_destruct;

@end

