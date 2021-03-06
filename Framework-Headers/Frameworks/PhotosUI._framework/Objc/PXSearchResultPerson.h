//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXNewSearchResult-Protocol.h>

@class NSString;

@interface PXSearchResultPerson : NSObject <PXNewSearchResult>
{
    NSString *_personUUID;
    NSString *_identifier;
    unsigned long long _type;
    NSString *_title;
    NSString *_subtitle;
    unsigned long long _assetCount;
}

@property (nonatomic) unsigned long long assetCount; // @synthesize assetCount=_assetCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *personUUID; // @synthesize personUUID=_personUUID;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)uniqueIdentiferFromPersonUUID:(id)arg1 displayName:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)arg1 assetCount:(unsigned long long)arg2 personUUID:(id)arg3 identifier:(id)arg4;
- (BOOL)isEqual:(id)arg1;

@end

