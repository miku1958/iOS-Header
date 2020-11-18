//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/DESRecipeEvaluation-Protocol.h>

@class NSString;
@protocol _DKKnowledgeQuerying;

@interface PSDESPlugin : NSObject <DESRecipeEvaluation>
{
    id<_DKKnowledgeQuerying> _knowledgeStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property (readonly) Class superclass;

+ (void)initialize;
- (void).cxx_destruct;
- (void)performEvaluation:(id)arg1;
- (BOOL)shouldDownloadAttachmentWithURL:(id)arg1 recipe:(id)arg2 recordInfo:(id)arg3;

@end
