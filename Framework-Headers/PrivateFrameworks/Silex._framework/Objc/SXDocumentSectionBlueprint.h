//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDocumentSectionBlueprint-Protocol.h>

@class NSArray, NSString;

@interface SXDocumentSectionBlueprint : NSObject <SXDocumentSectionBlueprint>
{
    NSArray *_items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly) Class superclass;

+ (id)blueprintWithItems:(id)arg1;
- (void).cxx_destruct;

@end
