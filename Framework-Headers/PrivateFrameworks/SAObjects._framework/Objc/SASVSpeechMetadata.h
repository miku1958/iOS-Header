//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SASVSpeechMetadata : AceObject <SAAceSerializable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *phraseDataList;
@property (copy, nonatomic) NSString *preITN;
@property (readonly) Class superclass;

+ (id)speechMetadata;
+ (id)speechMetadataWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
