//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface UIDraggingSystemSceneMetadata : NSObject <NSSecureCoding>
{
    NSString *_activityType;
    NSString *_sceneIdentifier;
}

@property (copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property (copy, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

