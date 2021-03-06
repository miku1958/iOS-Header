//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExposureNotification/NSCopying-Protocol.h>
#import <ExposureNotification/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface ENRegionServerAgencyExposureNotificationConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_classificationName;
    NSURL *_classificationURL;
    NSString *_localizedExposureDetailBody;
    NSString *_localizedNotificationSubject;
    NSString *_localizedNotificationBody;
}

@property (readonly, copy, nonatomic) NSString *classificationName; // @synthesize classificationName=_classificationName;
@property (readonly, copy, nonatomic) NSURL *classificationURL; // @synthesize classificationURL=_classificationURL;
@property (readonly, copy, nonatomic) NSString *localizedExposureDetailBody; // @synthesize localizedExposureDetailBody=_localizedExposureDetailBody;
@property (readonly, copy, nonatomic) NSString *localizedNotificationBody; // @synthesize localizedNotificationBody=_localizedNotificationBody;
@property (readonly, copy, nonatomic) NSString *localizedNotificationSubject; // @synthesize localizedNotificationSubject=_localizedNotificationSubject;

+ (BOOL)getNotificationConfiguration:(id *)arg1 fromDictionary:(id)arg2 locale:(id)arg3 index:(unsigned char)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

