//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSMutableCopying-Protocol.h>
#import <WorkflowKit/WFCloudKitItem-Protocol.h>

@class CKRecordID, NSData, NSString, WFFileRepresentation;

@interface WFGalleryBanner : NSObject <WFCloudKitItem, NSMutableCopying>
{
    CKRecordID *_identifier;
    NSString *_name;
    CKRecordID *_detailPage;
    WFFileRepresentation *_iphone2xImageFile;
    WFFileRepresentation *_iphone3xImageFile;
    WFFileRepresentation *_ipad2xImageFile;
    NSString *_language;
    CKRecordID *_base;
    NSString *_persistentIdentifier;
}

@property (readonly, nonatomic) CKRecordID *base; // @synthesize base=_base;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CKRecordID *detailPage; // @synthesize detailPage=_detailPage;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) WFFileRepresentation *ipad2xImageFile; // @synthesize ipad2xImageFile=_ipad2xImageFile;
@property (strong, nonatomic) WFFileRepresentation *iphone2xImageFile; // @synthesize iphone2xImageFile=_iphone2xImageFile;
@property (strong, nonatomic) WFFileRepresentation *iphone3xImageFile; // @synthesize iphone3xImageFile=_iphone3xImageFile;
@property (readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) Class superclass;

+ (struct CGSize)pixelSizeForBannerSize:(long long)arg1;
+ (struct CGSize)pointSizeForBannerSize:(long long)arg1;
+ (id)properties;
+ (id)propertyForSize:(long long)arg1;
+ (id)recordType;
+ (double)scaleForBannerSize:(long long)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)imageFileForSize:(long long)arg1;
- (id)imageForSize:(long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)referenceActionForKey:(id)arg1;

@end

