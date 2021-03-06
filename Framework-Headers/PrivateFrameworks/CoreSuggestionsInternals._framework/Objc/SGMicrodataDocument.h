//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface SGMicrodataDocument : NSObject
{
    NSMutableDictionary *_htmlIds;
    NSMutableArray *_items;
}

@property (readonly, nonatomic) NSDictionary *htmlIds; // @synthesize htmlIds=_htmlIds;
@property (readonly, nonatomic) NSArray *items; // @synthesize items=_items;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (id)asJsonLd;
- (id)init;
- (id)jsonLdForItem:(id)arg1;
- (void)setHtmlIdItemScope:(id)arg1 forHtmlId:(id)arg2;

@end

