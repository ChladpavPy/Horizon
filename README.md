# Horizon
Custom Rocket Flight Controller

## Bill of Materials (BOM)

| Component | Qty | Purpose / Description | Price (USD) | Link / Distributor |
| :--- | :---: | :--- | :--- | :--- |
| **Custom PCB Manufacture** | 2 | The actual circuit board to solder everything on. Ordered via JLCPCB standard 4-layer service. | ~$ | [JLCPCB](https://jlcpcb.com) |
| **2S battery** | 1 | Power source / The whole pcb and pyros will get power from this. | 12.77$ | [Allegro](https://allegro.cz/produkt/akumulator-lipo-tattu-hv-550mah-2s-7-6v-xt30-dac8961b-6a7f-4425-9fd0-e271a79d3002?offerId=17837986320) |
| **HOTA D6 Pro Charger** | 1 | Dual-channel AC/DC LiPo charger for safe, balanced battery maintenance and preparation. | ~$110 | [HobbyDrone.cz](https://www.hobbydrone.cz/cs/charger-hota-d6-pro-325w-15a-1-6s-dual-ac-dc/) |
| **GEPRC GEP-M1025-DQ GPS** | 1 | High-precision positioning data (u-blox M10) with integrated QMC5883L compass and backup DPS310 barometer. | $19.80 | [Banggood](https://www.banggood.com/cs/GEPRC-GEP-M1025-Series-M10-Chip-GPS-Module-for-RC-Drone-FPV-Racing-Helicopter-Quadcopter-RC-Airplane-Car-p-2000868.html?cur_warehouse=CN&ID=6324596&rmmds=search) |

### Manual Assembly Components (LCSC.com)
*Note: Due to the high complexity and cost of standard PCBA services for LGA-type sensors, these components are ordered separately and will be manually reflow soldered using a stencil and hot plate.*

| Component | Qty | Purpose / Description | Price (USD) | LCSC Part # |
| :--- | :---: | :--- | :--- | :--- |
| **ADXL372BCCZ-RL7** | 3 | High-g accelerometer (200g) for impact detection. | 53.11$ | C579465 |
| **BMP580** | 5 | Precision barometric pressure sensor. | 5.96$ | C22391138 |
| **TPS54525PWPR** | 5 | High-efficiency buck regulator. | 5.24$ | C140350 |
| **Total LCSC Cost** | - | - | **65.98$** | - |
