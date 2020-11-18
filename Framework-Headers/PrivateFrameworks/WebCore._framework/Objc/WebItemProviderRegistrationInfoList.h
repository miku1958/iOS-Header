//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSItemProvider, NSString;

@interface WebItemProviderRegistrationInfoList : NSObject
{
    struct RetainPtr<NSMutableArray> _representations;
    NSString *_suggestedName;
    long long _preferredPresentationStyle;
    NSData *_teamData;
    struct CGSize _preferredPresentationSize;
}

@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (nonatomic) struct CGSize preferredPresentationSize; // @synthesize preferredPresentationSize=_preferredPresentationSize;
@property (nonatomic) long long preferredPresentationStyle; // @synthesize preferredPresentationStyle=_preferredPresentationStyle;
@property (copy, nonatomic) NSString *suggestedName; // @synthesize suggestedName=_suggestedName;
@property (copy, nonatomic) NSData *teamData; // @synthesize teamData=_teamData;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addData:(id)arg1 forType:(id)arg2;
- (void)addPromisedType:(id)arg1 fileCallback:(CDUnknownBlockType)arg2;
- (void)addRepresentingObject:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateItems:(CDUnknownBlockType)arg1;
- (id)init;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;

@end

