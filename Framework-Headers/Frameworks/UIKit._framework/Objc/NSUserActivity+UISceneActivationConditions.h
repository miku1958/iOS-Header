//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUserActivity.h>

#import <UIKitCore/UIItemProviderReading-Protocol.h>
#import <UIKitCore/UIItemProviderWriting-Protocol.h>

@class NSArray, NSString;

@interface NSUserActivity (UISceneActivationConditions) <UIItemProviderReading, UIItemProviderWriting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetContentIdentifier;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
@end
