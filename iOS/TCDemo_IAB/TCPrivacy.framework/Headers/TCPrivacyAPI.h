//
//  TCPrivacyAPI.h
//  TCPrivacy
//
//  Created by Hakim on 03/12/2019.
//  Copyright © 2019 TagCommander. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface TCPrivacyAPI : NSObject

+ (BOOL) isConsentAlreadyGiven;
+ (unsigned long long) getLastTimeConsentWasSaved;
+ (BOOL) isCategoryAccepted: (int) catID;
+ (BOOL) isVendorAccepted: (int) venID;
+ (NSArray<NSString *> *) getAcceptedCategories;
+ (NSArray<NSString *> *) getAcceptedVendors;
+ (NSArray<NSString *> *) getAllAcceptedConsent;

@end
