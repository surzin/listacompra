//
//  Moneda.h
//  Comprame
//
//  Created by Antonio Gil Sánchez on 09/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Moneda : NSManagedObject

@property (nonatomic, retain) NSNumber * id_mone;
@property (nonatomic, retain) NSString * nombre_mone;
@property (nonatomic, retain) NSString * simbolo_mone;

@end
