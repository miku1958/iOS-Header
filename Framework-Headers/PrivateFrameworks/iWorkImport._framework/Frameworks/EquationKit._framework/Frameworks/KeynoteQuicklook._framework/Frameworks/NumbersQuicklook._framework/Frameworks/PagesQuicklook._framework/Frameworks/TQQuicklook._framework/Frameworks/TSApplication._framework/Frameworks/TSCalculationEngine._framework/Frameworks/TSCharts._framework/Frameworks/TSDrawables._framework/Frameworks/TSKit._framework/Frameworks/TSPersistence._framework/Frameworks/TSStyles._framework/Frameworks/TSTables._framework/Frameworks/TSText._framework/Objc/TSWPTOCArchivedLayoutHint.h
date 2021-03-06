//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <TSText/TSDArchivedHint-Protocol.h>

@class NSString, TSWPTOCLayoutHint;
@protocol TSDHint;

@interface TSWPTOCArchivedLayoutHint : TSPObject <TSDArchivedHint>
{
    TSWPTOCLayoutHint *_hint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<TSDHint> hint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1 hint:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end

