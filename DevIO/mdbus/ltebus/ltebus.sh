#!/bin/bash
/usr/bin/gdbus-codegen                                  \
              --generate-c-code       ltebus            \
              --c-namespace           LteBus            \
              --interface-prefix      lte_bus           \
              --c-generate-object-manager               \
              ltebus.xml

